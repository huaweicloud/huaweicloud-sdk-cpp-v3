
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_AddCopyDatabaseRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_AddCopyDatabaseRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  AddCopyDatabaseRequestBody
    : public ModelBase
{
public:
    AddCopyDatabaseRequestBody();
    virtual ~AddCopyDatabaseRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddCopyDatabaseRequestBody members

    /// <summary>
    /// 操作名称(copy_database)
    /// </summary>

    std::string getProcedureName() const;
    bool procedureNameIsSet() const;
    void unsetprocedureName();
    void setProcedureName(const std::string& value);

    /// <summary>
    /// 源库和目的库信息
    /// </summary>

    Object getParams() const;
    bool paramsIsSet() const;
    void unsetparams();
    void setParams(const Object& value);


protected:
    std::string procedureName_;
    bool procedureNameIsSet_;
    Object params_;
    bool paramsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_AddCopyDatabaseRequestBody_H_
