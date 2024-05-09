
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateStarRocksDataReplication_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateStarRocksDataReplication_H_


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
/// StarRocks创建数据同步请求。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CreateStarRocksDataReplication
    : public ModelBase
{
public:
    CreateStarRocksDataReplication();
    virtual ~CreateStarRocksDataReplication();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateStarRocksDataReplication members

    /// <summary>
    /// GaussDB(for MySQL)实例ID。
    /// </summary>

    std::string getSourceInstanceId() const;
    bool sourceInstanceIdIsSet() const;
    void unsetsourceInstanceId();
    void setSourceInstanceId(const std::string& value);

    /// <summary>
    /// GaussDB(for MySQL)只读节点ID。如为空，则取GaussDB(for MySQL)主节点ID
    /// </summary>

    std::string getSourceNodeId() const;
    bool sourceNodeIdIsSet() const;
    void unsetsourceNodeId();
    void setSourceNodeId(const std::string& value);

    /// <summary>
    /// 源数据库。
    /// </summary>

    std::string getSourceDatabase() const;
    bool sourceDatabaseIsSet() const;
    void unsetsourceDatabase();
    void setSourceDatabase(const std::string& value);

    /// <summary>
    /// 目标数据库。 字符长度限制3~128位，仅支持英文大小写字母、数字以及下划线_。
    /// </summary>

    std::string getTargetDatabase() const;
    bool targetDatabaseIsSet() const;
    void unsettargetDatabase();
    void setTargetDatabase(const std::string& value);

    /// <summary>
    /// 同步任务名。 字符长度限制3~128位，仅支持英文大小写字母、数字以及下划线_。
    /// </summary>

    std::string getTaskName() const;
    bool taskNameIsSet() const;
    void unsettaskName();
    void setTaskName(const std::string& value);


protected:
    std::string sourceInstanceId_;
    bool sourceInstanceIdIsSet_;
    std::string sourceNodeId_;
    bool sourceNodeIdIsSet_;
    std::string sourceDatabase_;
    bool sourceDatabaseIsSet_;
    std::string targetDatabase_;
    bool targetDatabaseIsSet_;
    std::string taskName_;
    bool taskNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateStarRocksDataReplication_H_
