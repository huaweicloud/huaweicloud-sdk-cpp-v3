
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_SkipPreCheckInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_SkipPreCheckInfo_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 跳过预检查项参数。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  SkipPreCheckInfo
    : public ModelBase
{
public:
    SkipPreCheckInfo();
    virtual ~SkipPreCheckInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SkipPreCheckInfo members

    /// <summary>
    /// 跳过的预检查项。 dstDbDiskSize：目标端磁盘可用大小是否支持 MysqlForeignKeyReferentialActionCheck：源端存在不支持的外键引用操作 MysqlSourceMaxAllowedPacketActionChecker：源库的max_allowed_packet参数值过小，可能会导致数据迁移失败 checkJobDbObjectInfo：对象选择信息检查 checkRecycleBinConsistent：回收站一致性检查 dbClockConsistency：时钟一致性校验 dbGroupConcatMaxLenConsistency：数据库参数group_concat_max_len一致性检查 dbIsolationLevelConsistency：事务隔离级别一致性校验 dbParamConsistency：结构迁移参数一致性校验 dbServerUuidConsistency：SERVER_UUID的一致性检查 dbTimeZoneConsistency：TIME_ZONE的一致性检查 dstMaxAllowedPacketCheck：增加预校验项检查目标库的max_allowed_packet参数 gtidFormatCheck：mysql源预检查GTID格式校验 innodbStrictModeConsistency：数据库参数INNODB_STRICT_MODE的一致性检查 isUserRequireSslLink：用户是否需要SSL mappedNameCheck：目标库对象命名约束检查 mysqlBlockEncryptionModeInconsistency：源库与目标库的参数block_encryption_mode不一致 rdsCreateDefaultPrimaryKeyConsistency：主备库是否开启隐式主键检查 sourceCheckDynamicMasking：源库脱敏检查 sourceEncryptTableActionChecker：源库加密表检查 sqlModeConsistency：数据库参数SQL_MODE的一致性检查 sqlModeNoEngine：目标库SQL_MODE中NO_ENGINE值检查 srcBinlogFormatCheck：源数据库binlog格式检查 srcBinlogRowImageCheck：源数据库参数binlog_row_image检查 srcDbBinlogExpireLogsDays：源库ExpireLogsDays参数检查 srcDbBinlogIsOff：源数据库二进制日志是否开启 srcDbExistUnsupportEngineTable：源数据库是否存在使用不支持的存储引擎的表 srcDbIndexKeyLength：原库索引列长度检查 srcDbIsStandbyTaurus：源库为Taurus备库检查 srcDbNameContainsUnsupportedSymbols：源数据库的库名是否合法 srcDbServerIdCheck：源数据库参数server_id的检查 srcDstTableNameCaseSensitiveCheck：源数据库和目标数据库表名大小写敏感性检查 srcGtidStatusCheck：源数据库GTID状态检查 srcHasLargeColumnTypeCheck：同步对象中是否存在包含longtext,longblob类型字段的表 srcIdentifierWithBreakCheck：源端表结构是否存在换行 srcTableNameContainsNonAscii：源数据库中有包含非ASCII字符的表名 srcTriggerAndEventCheck：识别到源端是否存在触发器/事件 srclogSlaveUpdatesCheck：源数据库参数slave_updates_check检查 targetCheckDynamicMasking：目标库脱敏检查 targetGtidStatusCheck：目标数据库GTID状态检查 tenantDbActionCheck：多租特性检查 userSelectObjectsCheck：选择对象预检查 dstStatusCheck：目标库实例状态是否正常 dstDbPrivilegesIsEnough：目标数据库用户权限是否足够 dstDbVersionSupport：目标数据库版本是否支持 srcDbVersionSupport：源数据库版本是否支持 dstDbConnection：目标数据库连接是否成功 srcDbConnection：源数据库连接是否成功 checkEmptyDstDb：目标库空库检查 srcDbPrivilegesIsEnoughForIncre：增量迁移,源数据库用户权限是否足够 srcHasNoPkTableWhenTgtHasInvisiblePk：源迁移库无主键表检查 userPrivilegeIsEnoughForDefiner：definer迁移权限检查
    /// </summary>

    std::vector<std::string>& getSkippedPrecheckList();
    bool skippedPrecheckListIsSet() const;
    void unsetskippedPrecheckList();
    void setSkippedPrecheckList(const std::vector<std::string>& value);

    /// <summary>
    /// 跳过预检查原因。
    /// </summary>

    std::string getSkipReason() const;
    bool skipReasonIsSet() const;
    void unsetskipReason();
    void setSkipReason(const std::string& value);


protected:
    std::vector<std::string> skippedPrecheckList_;
    bool skippedPrecheckListIsSet_;
    std::string skipReason_;
    bool skipReasonIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_SkipPreCheckInfo_H_
