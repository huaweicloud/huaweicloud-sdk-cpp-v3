
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_AttributeOperationDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_AttributeOperationDto_H_


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
/// An operation that applies to the requested group. This operation might add, replace, or remove an attribute.
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  AttributeOperationDto
    : public ModelBase
{
public:
    AttributeOperationDto();
    virtual ~AttributeOperationDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AttributeOperationDto members

    /// <summary>
    /// 要更新的属性的字符串表示
    /// </summary>

    std::string getAttributePath() const;
    bool attributePathIsSet() const;
    void unsetattributePath();
    void setAttributePath(const std::string& value);

    /// <summary>
    /// 要更新的属性值。当属性为对象类型时，此处填写对象的JSON字符串。为null时表示删除对应属性
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

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_AttributeOperationDto_H_
