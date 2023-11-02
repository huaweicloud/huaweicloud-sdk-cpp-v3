
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_DataBaseBean_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_DataBaseBean_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/DataBase.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  DataBaseBean
    : public ModelBase
{
public:
    DataBaseBean();
    virtual ~DataBaseBean();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DataBaseBean members

    /// <summary>
    /// 
    /// </summary>

    DataBase getDatabase() const;
    bool databaseIsSet() const;
    void unsetdatabase();
    void setDatabase(const DataBase& value);


protected:
    DataBase database_;
    bool databaseIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_DataBaseBean_H_
