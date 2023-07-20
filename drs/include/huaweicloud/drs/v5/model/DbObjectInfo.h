
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_DbObjectInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_DbObjectInfo_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 对象信息。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  DbObjectInfo
    : public ModelBase
{
public:
    DbObjectInfo();
    virtual ~DbObjectInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DbObjectInfo members

    /// <summary>
    /// 源数据库库名。
    /// </summary>

    std::string getSourceDbName() const;
    bool sourceDbNameIsSet() const;
    void unsetsourceDbName();
    void setSourceDbName(const std::string& value);

    /// <summary>
    /// 源数据库模式名。
    /// </summary>

    std::string getSourceSchemaName() const;
    bool sourceSchemaNameIsSet() const;
    void unsetsourceSchemaName();
    void setSourceSchemaName(const std::string& value);

    /// <summary>
    /// 源数据库表名。
    /// </summary>

    std::string getSourceTableName() const;
    bool sourceTableNameIsSet() const;
    void unsetsourceTableName();
    void setSourceTableName(const std::string& value);

    /// <summary>
    /// 目标数据库库名。
    /// </summary>

    std::string getTargetDbName() const;
    bool targetDbNameIsSet() const;
    void unsettargetDbName();
    void setTargetDbName(const std::string& value);

    /// <summary>
    /// 目标数据库模式名。
    /// </summary>

    std::string getTargetSchemaName() const;
    bool targetSchemaNameIsSet() const;
    void unsettargetSchemaName();
    void setTargetSchemaName(const std::string& value);

    /// <summary>
    /// 目标数据库表名。
    /// </summary>

    std::string getTargetTableName() const;
    bool targetTableNameIsSet() const;
    void unsettargetTableName();
    void setTargetTableName(const std::string& value);

    /// <summary>
    /// 是否有列映射。
    /// </summary>

    bool isHasColumnInfo() const;
    bool hasColumnInfoIsSet() const;
    void unsethasColumnInfo();
    void setHasColumnInfo(bool value);


protected:
    std::string sourceDbName_;
    bool sourceDbNameIsSet_;
    std::string sourceSchemaName_;
    bool sourceSchemaNameIsSet_;
    std::string sourceTableName_;
    bool sourceTableNameIsSet_;
    std::string targetDbName_;
    bool targetDbNameIsSet_;
    std::string targetSchemaName_;
    bool targetSchemaNameIsSet_;
    std::string targetTableName_;
    bool targetTableNameIsSet_;
    bool hasColumnInfo_;
    bool hasColumnInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_DbObjectInfo_H_
