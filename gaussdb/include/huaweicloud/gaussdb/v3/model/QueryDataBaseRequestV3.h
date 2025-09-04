
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_QueryDataBaseRequestV3_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_QueryDataBaseRequestV3_H_


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
/// 查询HTAP主实例数据库请求体。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  QueryDataBaseRequestV3
    : public ModelBase
{
public:
    QueryDataBaseRequestV3();
    virtual ~QueryDataBaseRequestV3();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryDataBaseRequestV3 members

    /// <summary>
    /// **参数解释**：  查询的数据库名称。  **约束限制**：  仅支持英文大小写字母、数字以及下划线，模糊搜索时列表元素数目必须为1。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::vector<std::string>& getDatabases();
    bool databasesIsSet() const;
    void unsetdatabases();
    void setDatabases(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：  需要查询数据库的源实例ID，严格匹配UUID规则。  **约束限制**：  只能由英文字母、数字组成，且长度为36个字符。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getSourceInstanceId() const;
    bool sourceInstanceIdIsSet() const;
    void unsetsourceInstanceId();
    void setSourceInstanceId(const std::string& value);


protected:
    std::vector<std::string> databases_;
    bool databasesIsSet_;
    std::string sourceInstanceId_;
    bool sourceInstanceIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_QueryDataBaseRequestV3_H_
