
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_UniqueAttributeDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_UniqueAttributeDto_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// An entity attribute that&#39;s unique to a specific entity.
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  UniqueAttributeDto
    : public ModelBase
{
public:
    UniqueAttributeDto();
    virtual ~UniqueAttributeDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UniqueAttributeDto members

    /// <summary>
    /// 属性路径
    /// </summary>

    std::string getAttributePath() const;
    bool attributePathIsSet() const;
    void unsetattributePath();
    void setAttributePath(const std::string& value);

    /// <summary>
    /// 属性的值
    /// </summary>

    std::string getAttributeValue() const;
    bool attributeValueIsSet() const;
    void unsetattributeValue();
    void setAttributeValue(const std::string& value);


protected:
    std::string attributePath_;
    bool attributePathIsSet_;
    std::string attributeValue_;
    bool attributeValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_UniqueAttributeDto_H_
