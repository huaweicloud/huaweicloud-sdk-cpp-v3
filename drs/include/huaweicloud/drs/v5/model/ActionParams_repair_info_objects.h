
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ActionParams_repair_info_objects_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ActionParams_repair_info_objects_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// 
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ActionParams_repair_info_objects
    : public ModelBase
{
public:
    ActionParams_repair_info_objects();
    virtual ~ActionParams_repair_info_objects();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ActionParams_repair_info_objects members

    /// <summary>
    /// 数据库名称。
    /// </summary>

    std::string getDatabase() const;
    bool databaseIsSet() const;
    void unsetdatabase();
    void setDatabase(const std::string& value);

    /// <summary>
    /// schema名称。
    /// </summary>

    std::string getSchema() const;
    bool schemaIsSet() const;
    void unsetschema();
    void setSchema(const std::string& value);

    /// <summary>
    /// 表名称。
    /// </summary>

    std::string getTable() const;
    bool tableIsSet() const;
    void unsettable();
    void setTable(const std::string& value);


protected:
    std::string database_;
    bool databaseIsSet_;
    std::string schema_;
    bool schemaIsSet_;
    std::string table_;
    bool tableIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ActionParams_repair_info_objects_H_
