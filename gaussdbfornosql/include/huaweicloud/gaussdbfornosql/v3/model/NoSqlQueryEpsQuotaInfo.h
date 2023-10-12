
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_NoSqlQueryEpsQuotaInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_NoSqlQueryEpsQuotaInfo_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbfornosql/v3/model/NoSqlEpsQuotaUsed.h>
#include <huaweicloud/gaussdbfornosql/v3/model/NoSqlEpsQuotaTotal.h>
#include <string>

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
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  NoSqlQueryEpsQuotaInfo
    : public ModelBase
{
public:
    NoSqlQueryEpsQuotaInfo();
    virtual ~NoSqlQueryEpsQuotaInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NoSqlQueryEpsQuotaInfo members

    /// <summary>
    /// 企业项目ID。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 企业项目名称。
    /// </summary>

    std::string getEnterpriseProjectName() const;
    bool enterpriseProjectNameIsSet() const;
    void unsetenterpriseProjectName();
    void setEnterpriseProjectName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NoSqlEpsQuotaTotal getQuota() const;
    bool quotaIsSet() const;
    void unsetquota();
    void setQuota(const NoSqlEpsQuotaTotal& value);

    /// <summary>
    /// 
    /// </summary>

    NoSqlEpsQuotaUsed getUsed() const;
    bool usedIsSet() const;
    void unsetused();
    void setUsed(const NoSqlEpsQuotaUsed& value);


protected:
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string enterpriseProjectName_;
    bool enterpriseProjectNameIsSet_;
    NoSqlEpsQuotaTotal quota_;
    bool quotaIsSet_;
    NoSqlEpsQuotaUsed used_;
    bool usedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_NoSqlQueryEpsQuotaInfo_H_
