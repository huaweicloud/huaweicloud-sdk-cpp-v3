
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ParaGroupDatastore_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ParaGroupDatastore_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_RDS_V3_EXPORT  ParaGroupDatastore
    : public ModelBase
{
public:
    ParaGroupDatastore();
    virtual ~ParaGroupDatastore();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ParaGroupDatastore members

    /// <summary>
    /// 数据库引擎，不区分大小写： - MySQL - PostgreSQL - SQLServer - MariaDB
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 数据库版本。  - MySQL引擎支持5.6、5.7、8.0版本。取值示例：5.7。具有相应权限的用户才可使用8.0，您可联系华为云客服人员申请。 - PostgreSQL引擎支持9.5、9.6、10、11版本。取值示例：9.6。 - Microsoft SQL Server：仅支持2017 企业版、2017 标准版、2017 web版、2014 标准版、2014 企业版、2016 标准版、2016 企业版、2012 企业版、2012 标准版、2012 web版、2008 R2 企业版、2008 R2 web版、2014 web版、2016 web版。取值示例2014_SE。 例如：2017标准版可填写2017_SE，2017企业版可填写2017_EE，2017web版可以填写2017_WEB
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string version_;
    bool versionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ParaGroupDatastore_H_
