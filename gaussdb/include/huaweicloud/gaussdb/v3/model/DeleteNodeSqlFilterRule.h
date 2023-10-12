
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteNodeSqlFilterRule_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteNodeSqlFilterRule_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// SQL限流规则。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  DeleteNodeSqlFilterRule
    : public ModelBase
{
public:
    DeleteNodeSqlFilterRule();
    virtual ~DeleteNodeSqlFilterRule();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteNodeSqlFilterRule members

    /// <summary>
    /// Sql限流类型。  取值范围： - SELECT - UPDATE - DELETE
    /// </summary>

    std::string getSqlType() const;
    bool sqlTypeIsSet() const;
    void unsetsqlType();
    void setSqlType(const std::string& value);

    /// <summary>
    /// SQL限流具体规则。
    /// </summary>

    std::vector<std::string>& getPatterns();
    bool patternsIsSet() const;
    void unsetpatterns();
    void setPatterns(const std::vector<std::string>& value);


protected:
    std::string sqlType_;
    bool sqlTypeIsSet_;
    std::vector<std::string> patterns_;
    bool patternsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteNodeSqlFilterRule_H_
