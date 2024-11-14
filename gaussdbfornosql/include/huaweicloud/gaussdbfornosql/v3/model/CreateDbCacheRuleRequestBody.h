
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_CreateDbCacheRuleRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_CreateDbCacheRuleRequestBody_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  CreateDbCacheRuleRequestBody
    : public ModelBase
{
public:
    CreateDbCacheRuleRequestBody();
    virtual ~CreateDbCacheRuleRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateDbCacheRuleRequestBody members

    /// <summary>
    /// 内存加速映射ID。
    /// </summary>

    std::string getDbcacheMappingId() const;
    bool dbcacheMappingIdIsSet() const;
    void unsetdbcacheMappingId();
    void setDbcacheMappingId(const std::string& value);

    /// <summary>
    /// 内存加速规则名称。不超过256字符，需要确保在当前映射下唯一。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 源端数据库。
    /// </summary>

    std::string getSourceDbSchema() const;
    bool sourceDbSchemaIsSet() const;
    void unsetsourceDbSchema();
    void setSourceDbSchema(const std::string& value);

    /// <summary>
    /// 源端数据表。
    /// </summary>

    std::string getSourceDbTable() const;
    bool sourceDbTableIsSet() const;
    void unsetsourceDbTable();
    void setSourceDbTable(const std::string& value);

    /// <summary>
    /// 目标数据存储类型。 取值为： hash。
    /// </summary>

    std::string getStorageType() const;
    bool storageTypeIsSet() const;
    void unsetstorageType();
    void setStorageType(const std::string& value);

    /// <summary>
    /// 目标数据库。取值范围： [0-999]。
    /// </summary>

    std::string getTargetDatabase() const;
    bool targetDatabaseIsSet() const;
    void unsettargetDatabase();
    void setTargetDatabase(const std::string& value);

    /// <summary>
    /// 映射的key使用的column列表。
    /// </summary>

    std::vector<std::string>& getKeyColumns();
    bool keyColumnsIsSet() const;
    void unsetkeyColumns();
    void setKeyColumns(const std::vector<std::string>& value);

    /// <summary>
    /// 映射的value使用的column列表。
    /// </summary>

    std::vector<std::string>& getValueColumns();
    bool valueColumnsIsSet() const;
    void unsetvalueColumns();
    void setValueColumns(const std::vector<std::string>& value);

    /// <summary>
    /// key的生存时间。单位:ms。不传该值，默认取2592000000，表示30天。
    /// </summary>

    std::string getTtl() const;
    bool ttlIsSet() const;
    void unsetttl();
    void setTtl(const std::string& value);

    /// <summary>
    /// 映射的key分隔符。只允许一个字符。
    /// </summary>

    std::string getKeySeparator() const;
    bool keySeparatorIsSet() const;
    void unsetkeySeparator();
    void setKeySeparator(const std::string& value);

    /// <summary>
    /// 映射的value分隔符。只允许一个字符。
    /// </summary>

    std::string getValueSeparator() const;
    bool valueSeparatorIsSet() const;
    void unsetvalueSeparator();
    void setValueSeparator(const std::string& value);

    /// <summary>
    /// 键前缀。最长限制1024字符。需确保key_prefix和target_database在当前映射下唯一。
    /// </summary>

    std::string getKeyPrefix() const;
    bool keyPrefixIsSet() const;
    void unsetkeyPrefix();
    void setKeyPrefix(const std::string& value);


protected:
    std::string dbcacheMappingId_;
    bool dbcacheMappingIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string sourceDbSchema_;
    bool sourceDbSchemaIsSet_;
    std::string sourceDbTable_;
    bool sourceDbTableIsSet_;
    std::string storageType_;
    bool storageTypeIsSet_;
    std::string targetDatabase_;
    bool targetDatabaseIsSet_;
    std::vector<std::string> keyColumns_;
    bool keyColumnsIsSet_;
    std::vector<std::string> valueColumns_;
    bool valueColumnsIsSet_;
    std::string ttl_;
    bool ttlIsSet_;
    std::string keySeparator_;
    bool keySeparatorIsSet_;
    std::string valueSeparator_;
    bool valueSeparatorIsSet_;
    std::string keyPrefix_;
    bool keyPrefixIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_CreateDbCacheRuleRequestBody_H_
