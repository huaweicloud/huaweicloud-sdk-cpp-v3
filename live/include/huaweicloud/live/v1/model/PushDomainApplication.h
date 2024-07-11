
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_PushDomainApplication_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_PushDomainApplication_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  PushDomainApplication
    : public ModelBase
{
public:
    PushDomainApplication();
    virtual ~PushDomainApplication();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PushDomainApplication members

    /// <summary>
    /// 应用名，默认为live
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// HLS切片时长，单位：s。
    /// </summary>

    int32_t getHlsFragment() const;
    bool hlsFragmentIsSet() const;
    void unsethlsFragment();
    void setHlsFragment(int32_t value);

    /// <summary>
    /// 每个M3U8文件内ts切片个数
    /// </summary>

    int32_t getHlsTsCount() const;
    bool hlsTsCountIsSet() const;
    void unsethlsTsCount();
    void setHlsTsCount(int32_t value);

    /// <summary>
    /// 每个M3U8文件内最小ts分片数
    /// </summary>

    int32_t getHlsMinFrags() const;
    bool hlsMinFragsIsSet() const;
    void unsethlsMinFrags();
    void setHlsMinFrags(int32_t value);


protected:
    std::string name_;
    bool nameIsSet_;
    int32_t hlsFragment_;
    bool hlsFragmentIsSet_;
    int32_t hlsTsCount_;
    bool hlsTsCountIsSet_;
    int32_t hlsMinFrags_;
    bool hlsMinFragsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_PushDomainApplication_H_
