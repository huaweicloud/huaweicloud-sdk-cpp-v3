
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_BatchAttachSharebwDict_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_BatchAttachSharebwDict_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 共享带宽批量加入弹性公网IP参数
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  BatchAttachSharebwDict
    : public ModelBase
{
public:
    BatchAttachSharebwDict();
    virtual ~BatchAttachSharebwDict();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchAttachSharebwDict members

    /// <summary>
    /// - 共享带宽的id
    /// </summary>

    std::string getBandwidthId() const;
    bool bandwidthIdIsSet() const;
    void unsetbandwidthId();
    void setBandwidthId(const std::string& value);

    /// <summary>
    /// - 弹性公网IP ID
    /// </summary>

    std::string getPublicipId() const;
    bool publicipIdIsSet() const;
    void unsetpublicipId();
    void setPublicipId(const std::string& value);


protected:
    std::string bandwidthId_;
    bool bandwidthIdIsSet_;
    std::string publicipId_;
    bool publicipIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_BatchAttachSharebwDict_H_
