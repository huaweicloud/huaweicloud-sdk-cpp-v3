
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateChDatabaseConfigRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateChDatabaseConfigRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改数据同步
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UpdateChDatabaseConfigRequestBody
    : public ModelBase
{
public:
    UpdateChDatabaseConfigRequestBody();
    virtual ~UpdateChDatabaseConfigRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateChDatabaseConfigRequestBody members

    /// <summary>
    /// 源实例ID，严格匹配UUID规则。
    /// </summary>

    std::string getSourceInstanceId() const;
    bool sourceInstanceIdIsSet() const;
    void unsetsourceInstanceId();
    void setSourceInstanceId(const std::string& value);

    /// <summary>
    /// 源实例节点ID。
    /// </summary>

    std::string getSourceNodeId() const;
    bool sourceNodeIdIsSet() const;
    void unsetsourceNodeId();
    void setSourceNodeId(const std::string& value);

    /// <summary>
    /// 数据库名。
    /// </summary>

    std::string getDatabase() const;
    bool databaseIsSet() const;
    void unsetdatabase();
    void setDatabase(const std::string& value);

    /// <summary>
    /// 配置值。仅支持修改同步范围，不支持修改白名单或黑名单类型。  例如：创建了白名单数据同步，调用本接口修改时， 支持 \&quot;value\&quot;：\&quot;{\\\&quot;white_list\\\&quot;:\\\&quot;test1,test2,test3\\\&quot;}\&quot; 不支持 \&quot;value\&quot;：\&quot;{\\\&quot;black_list\\\&quot;:\\\&quot;test1,test2,test3\\\&quot;}\&quot;
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);


protected:
    std::string sourceInstanceId_;
    bool sourceInstanceIdIsSet_;
    std::string sourceNodeId_;
    bool sourceNodeIdIsSet_;
    std::string database_;
    bool databaseIsSet_;
    std::string value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateChDatabaseConfigRequestBody_H_
