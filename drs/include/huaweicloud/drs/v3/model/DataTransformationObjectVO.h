
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_DataTransformationObjectVO_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_DataTransformationObjectVO_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据加工对象
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  DataTransformationObjectVO
    : public ModelBase
{
public:
    DataTransformationObjectVO();
    virtual ~DataTransformationObjectVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DataTransformationObjectVO members

    /// <summary>
    /// 数据库对象、数据库表名称和过滤类型名称，例如格式为db1-*-*-tb1-*-*---conditionFilter--。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// contentConditionalFilter：普通行过滤配置； configConditionalFilter：高级行过滤配置。
    /// </summary>

    std::string getDataTransformationType() const;
    bool dataTransformationTypeIsSet() const;
    void unsetdataTransformationType();
    void setDataTransformationType(const std::string& value);

    /// <summary>
    /// 库名称。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// schema名称。
    /// </summary>

    std::string getSchemaName() const;
    bool schemaNameIsSet() const;
    void unsetschemaName();
    void setSchemaName(const std::string& value);

    /// <summary>
    /// 表名称。
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string dataTransformationType_;
    bool dataTransformationTypeIsSet_;
    std::string dbName_;
    bool dbNameIsSet_;
    std::string schemaName_;
    bool schemaNameIsSet_;
    std::string tableName_;
    bool tableNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_DataTransformationObjectVO_H_
