
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_AlternateIdentifierDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_AlternateIdentifierDto_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenterstore/v1/model/ExternalIdDto.h>
#include <huaweicloud/identitycenterstore/v1/model/UniqueAttributeDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// A unique identifier for a user or group that is not the its primary identifier.This value can be an identifier from an external identity provider (IdP) that is associated with the group or a unique attribute.
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  AlternateIdentifierDto
    : public ModelBase
{
public:
    AlternateIdentifierDto();
    virtual ~AlternateIdentifierDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AlternateIdentifierDto members

    /// <summary>
    /// 
    /// </summary>

    ExternalIdDto getExternalId() const;
    bool externalIdIsSet() const;
    void unsetexternalId();
    void setExternalId(const ExternalIdDto& value);

    /// <summary>
    /// 
    /// </summary>

    UniqueAttributeDto getUniqueAttribute() const;
    bool uniqueAttributeIsSet() const;
    void unsetuniqueAttribute();
    void setUniqueAttribute(const UniqueAttributeDto& value);


protected:
    ExternalIdDto externalId_;
    bool externalIdIsSet_;
    UniqueAttributeDto uniqueAttribute_;
    bool uniqueAttributeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_AlternateIdentifierDto_H_
