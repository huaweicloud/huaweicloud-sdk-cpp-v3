
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_AttachEipRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_AttachEipRequestBody_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  AttachEipRequestBody
    : public ModelBase
{
public:
    AttachEipRequestBody();
    virtual ~AttachEipRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AttachEipRequestBody members

    /// <summary>
    /// 公网IP的ID。
    /// </summary>

    std::string getPublicIpId() const;
    bool publicIpIdIsSet() const;
    void unsetpublicIpId();
    void setPublicIpId(const std::string& value);

    /// <summary>
    /// 公网IP。
    /// </summary>

    std::string getPublicIp() const;
    bool publicIpIsSet() const;
    void unsetpublicIp();
    void setPublicIp(const std::string& value);


protected:
    std::string publicIpId_;
    bool publicIpIdIsSet_;
    std::string publicIp_;
    bool publicIpIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_AttachEipRequestBody_H_
