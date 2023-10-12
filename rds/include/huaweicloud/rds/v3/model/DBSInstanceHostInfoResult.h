
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_DBSInstanceHostInfoResult_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_DBSInstanceHostInfoResult_H_


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
class HUAWEICLOUD_RDS_V3_EXPORT  DBSInstanceHostInfoResult
    : public ModelBase
{
public:
    DBSInstanceHostInfoResult();
    virtual ~DBSInstanceHostInfoResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DBSInstanceHostInfoResult members

    /// <summary>
    /// host  id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// host地址
    /// </summary>

    std::string getHost() const;
    bool hostIsSet() const;
    void unsethost();
    void setHost(const std::string& value);

    /// <summary>
    /// host 名称
    /// </summary>

    std::string getHostName() const;
    bool hostNameIsSet() const;
    void unsethostName();
    void setHostName(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string host_;
    bool hostIsSet_;
    std::string hostName_;
    bool hostNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_DBSInstanceHostInfoResult_H_
