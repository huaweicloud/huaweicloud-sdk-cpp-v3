
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SchemaTableDefinitionResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SchemaTableDefinitionResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  SchemaTableDefinitionResult
    : public ModelBase
{
public:
    SchemaTableDefinitionResult();
    virtual ~SchemaTableDefinitionResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SchemaTableDefinitionResult members

    /// <summary>
    /// **参数解释**: schema名称。 **取值范围**: 不涉及。
    /// </summary>

    std::string getSchemaName() const;
    bool schemaNameIsSet() const;
    void unsetschemaName();
    void setSchemaName(const std::string& value);

    /// <summary>
    /// **参数解释**: 数据库表定义信息。 **取值范围**: 不涉及。
    /// </summary>

    std::string getTableDefinition() const;
    bool tableDefinitionIsSet() const;
    void unsettableDefinition();
    void setTableDefinition(const std::string& value);


protected:
    std::string schemaName_;
    bool schemaNameIsSet_;
    std::string tableDefinition_;
    bool tableDefinitionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SchemaTableDefinitionResult_H_
