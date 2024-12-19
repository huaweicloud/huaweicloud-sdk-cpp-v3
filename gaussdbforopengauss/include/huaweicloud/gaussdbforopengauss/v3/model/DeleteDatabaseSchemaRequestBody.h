
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DeleteDatabaseSchemaRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DeleteDatabaseSchemaRequestBody_H_


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
/// 删除数据库schema信息。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  DeleteDatabaseSchemaRequestBody
    : public ModelBase
{
public:
    DeleteDatabaseSchemaRequestBody();
    virtual ~DeleteDatabaseSchemaRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteDatabaseSchemaRequestBody members

    /// <summary>
    /// 数据库名称。 使用已存在的数据库名称，且不能为模板库。 模板库包括postgres， template0 ，template1，templatea，template_pdb，templatem。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// SCHEMA名称。 SCHEMA名称在1到63个字符之间，由字母、数字、或下划线组成，不能包含其他特殊字符，不能以“pg”和数字开头，且不能和模板库和已存在的SCHEMA重名。 模板库包括postgres， template0 ，template1，templatea，template_pdb，templatem。 已存在的SCHEMA包括public，information_schema。
    /// </summary>

    std::string getSchema() const;
    bool schemaIsSet() const;
    void unsetschema();
    void setSchema(const std::string& value);


protected:
    std::string dbName_;
    bool dbNameIsSet_;
    std::string schema_;
    bool schemaIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DeleteDatabaseSchemaRequestBody_H_
