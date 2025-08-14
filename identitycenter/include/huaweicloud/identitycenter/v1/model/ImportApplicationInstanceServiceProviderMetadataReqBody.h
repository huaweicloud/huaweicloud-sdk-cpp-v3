
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ImportApplicationInstanceServiceProviderMetadataReqBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ImportApplicationInstanceServiceProviderMetadataReqBody_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// ImportApplicationInstanceServiceProviderMetadata的请求体
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  ImportApplicationInstanceServiceProviderMetadataReqBody
    : public ModelBase
{
public:
    ImportApplicationInstanceServiceProviderMetadataReqBody();
    virtual ~ImportApplicationInstanceServiceProviderMetadataReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImportApplicationInstanceServiceProviderMetadataReqBody members

    /// <summary>
    /// 元数据文件
    /// </summary>

    std::string getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const std::string& value);


protected:
    std::string metadata_;
    bool metadataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ImportApplicationInstanceServiceProviderMetadataReqBody_H_
