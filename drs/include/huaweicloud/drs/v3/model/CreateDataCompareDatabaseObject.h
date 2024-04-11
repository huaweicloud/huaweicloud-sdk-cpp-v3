
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_CreateDataCompareDatabaseObject_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_CreateDataCompareDatabaseObject_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// 数据加工对象信息
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  CreateDataCompareDatabaseObject
    : public ModelBase
{
public:
    CreateDataCompareDatabaseObject();
    virtual ~CreateDataCompareDatabaseObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateDataCompareDatabaseObject members

    /// <summary>
    /// 两层数据库场景： 数据库名称和数据库表名称，例如格式为t_auto_db-*-*-users，其中t_auto_db为数据库名称，users为表名称。  三层数据库场景： 数据库名称、数据库schema名称、数据库表名称，例如格式为t_auto_db-*-*-schema1-*-*-users，其中t_auto_db为数据库名称，schema1为数据库schema名称，users为表名称。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_CreateDataCompareDatabaseObject_H_
