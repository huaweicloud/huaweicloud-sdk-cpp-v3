
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_DetachBatchSharedbwReq_publicips_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_DetachBatchSharedbwReq_publicips_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v3/model/DetachSharedbwDict.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  DetachBatchSharedbwReq_publicips
    : public ModelBase
{
public:
    DetachBatchSharedbwReq_publicips();
    virtual ~DetachBatchSharedbwReq_publicips();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DetachBatchSharedbwReq_publicips members

    /// <summary>
    /// - 功能说明：EIP ID
    /// </summary>

    std::string getPublicipId() const;
    bool publicipIdIsSet() const;
    void unsetpublicipId();
    void setPublicipId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DetachSharedbwDict getBandwidth() const;
    bool bandwidthIsSet() const;
    void unsetbandwidth();
    void setBandwidth(const DetachSharedbwDict& value);


protected:
    std::string publicipId_;
    bool publicipIdIsSet_;
    DetachSharedbwDict bandwidth_;
    bool bandwidthIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_DetachBatchSharedbwReq_publicips_H_
