
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_RemuxOutputParam_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_RemuxOutputParam_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  RemuxOutputParam
    : public ModelBase
{
public:
    RemuxOutputParam();
    virtual ~RemuxOutputParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RemuxOutputParam members

    /// <summary>
    /// 输出格式。取值范围： - HLS - MP4 
    /// </summary>

    std::string getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const std::string& value);

    /// <summary>
    /// 分片时长，仅当“format”为“HLS”时有效。  取值范围：[2，10]。  默认值： 5。  单位：秒。 
    /// </summary>

    int32_t getSegmentDuration() const;
    bool segmentDurationIsSet() const;
    void unsetsegmentDuration();
    void setSegmentDuration(int32_t value);

    /// <summary>
    /// 输出媒体是否去除片源的中metadata自定义信息。默认值：false 
    /// </summary>

    bool isRemoveMeta() const;
    bool removeMetaIsSet() const;
    void unsetremoveMeta();
    void setRemoveMeta(bool value);


protected:
    std::string format_;
    bool formatIsSet_;
    int32_t segmentDuration_;
    bool segmentDurationIsSet_;
    bool removeMeta_;
    bool removeMetaIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_RemuxOutputParam_H_
