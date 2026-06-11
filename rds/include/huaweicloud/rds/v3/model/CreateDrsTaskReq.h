
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateDrsTaskReq_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateDrsTaskReq_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建drs任务的请求体
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  CreateDrsTaskReq
    : public ModelBase
{
public:
    CreateDrsTaskReq();
    virtual ~CreateDrsTaskReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateDrsTaskReq members

    /// <summary>
    /// 目标实例id
    /// </summary>

    std::string getTargetInstanceId() const;
    bool targetInstanceIdIsSet() const;
    void unsettargetInstanceId();
    void setTargetInstanceId(const std::string& value);

    /// <summary>
    /// 目标实例用户账号
    /// </summary>

    std::string getTargetUserName() const;
    bool targetUserNameIsSet() const;
    void unsettargetUserName();
    void setTargetUserName(const std::string& value);

    /// <summary>
    /// 目标实例用户密码
    /// </summary>

    std::string getTargetUserPassword() const;
    bool targetUserPasswordIsSet() const;
    void unsettargetUserPassword();
    void setTargetUserPassword(const std::string& value);

    /// <summary>
    /// 源实例用户账号
    /// </summary>

    std::string getSourceUserName() const;
    bool sourceUserNameIsSet() const;
    void unsetsourceUserName();
    void setSourceUserName(const std::string& value);

    /// <summary>
    /// 源实例用户密码
    /// </summary>

    std::string getSourceUserPassword() const;
    bool sourceUserPasswordIsSet() const;
    void unsetsourceUserPassword();
    void setSourceUserPassword(const std::string& value);

    /// <summary>
    /// 企业项目id
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// Drs实例规格
    /// </summary>

    std::string getDrsNodeType() const;
    bool drsNodeTypeIsSet() const;
    void unsetdrsNodeType();
    void setDrsNodeType(const std::string& value);

    /// <summary>
    /// 数据库名称
    /// </summary>

    std::vector<std::string>& getDatabaseList();
    bool databaseListIsSet() const;
    void unsetdatabaseList();
    void setDatabaseList(const std::vector<std::string>& value);


protected:
    std::string targetInstanceId_;
    bool targetInstanceIdIsSet_;
    std::string targetUserName_;
    bool targetUserNameIsSet_;
    std::string targetUserPassword_;
    bool targetUserPasswordIsSet_;
    std::string sourceUserName_;
    bool sourceUserNameIsSet_;
    std::string sourceUserPassword_;
    bool sourceUserPasswordIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string drsNodeType_;
    bool drsNodeTypeIsSet_;
    std::vector<std::string> databaseList_;
    bool databaseListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateDrsTaskReq_H_
