
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_GaussDBforOpenGaussDatabaseSchemaReq_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_GaussDBforOpenGaussDatabaseSchemaReq_H_

#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdbforopengauss/v3/model/GaussDBforOpenGaussCreateSchemaReq.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建数据库schema信息。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  GaussDBforOpenGaussDatabaseSchemaReq
    : public ModelBase
{
public:
    GaussDBforOpenGaussDatabaseSchemaReq();
    virtual ~GaussDBforOpenGaussDatabaseSchemaReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GaussDBforOpenGaussDatabaseSchemaReq members

    /// <summary>
    /// 数据库名称。  数据库名称在1到63个字符之间，由字母、数字、或下划线组成，不能包含其他特殊字符，不能以“pg”和数字开头，且不能和GaussDB 模板库重名。  GaussDB 模板库包括postgres， template0 ，template1。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// 每个元素都是与数据库相关联的schmea信息。单次请求最多支持20个元素。
    /// </summary>

    std::vector<GaussDBforOpenGaussCreateSchemaReq>& getSchemas();
    bool schemasIsSet() const;
    void unsetschemas();
    void setSchemas(const std::vector<GaussDBforOpenGaussCreateSchemaReq>& value);


protected:
    std::string dbName_;
    bool dbNameIsSet_;
    std::vector<GaussDBforOpenGaussCreateSchemaReq> schemas_;
    bool schemasIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_GaussDBforOpenGaussDatabaseSchemaReq_H_
