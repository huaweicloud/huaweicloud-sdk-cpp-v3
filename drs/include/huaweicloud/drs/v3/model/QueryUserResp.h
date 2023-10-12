
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryUserResp_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryUserResp_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/QueryRoleDetailResp.h>
#include <huaweicloud/drs/v3/model/QueryUserDetailResp.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 迁移用户响应体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  QueryUserResp
    : public ModelBase
{
public:
    QueryUserResp();
    virtual ~QueryUserResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryUserResp members

    /// <summary>
    /// 任务id
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 是否使用全局密码
    /// </summary>

    std::string getIsGlobalPassword() const;
    bool isGlobalPasswordIsSet() const;
    void unsetisGlobalPassword();
    void setIsGlobalPassword(const std::string& value);

    /// <summary>
    /// 错误码
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 用户列表数据
    /// </summary>

    std::vector<QueryUserDetailResp>& getUserList();
    bool userListIsSet() const;
    void unsetuserList();
    void setUserList(const std::vector<QueryUserDetailResp>& value);

    /// <summary>
    /// 角色列表数据
    /// </summary>

    std::vector<QueryRoleDetailResp>& getRolesList();
    bool rolesListIsSet() const;
    void unsetrolesList();
    void setRolesList(const std::vector<QueryRoleDetailResp>& value);

    /// <summary>
    /// 是否成功
    /// </summary>

    bool isIsSuccess() const;
    bool isSuccessIsSet() const;
    void unsetisSuccess();
    void setIsSuccess(bool value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string isGlobalPassword_;
    bool isGlobalPasswordIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::vector<QueryUserDetailResp> userList_;
    bool userListIsSet_;
    std::vector<QueryRoleDetailResp> rolesList_;
    bool rolesListIsSet_;
    bool isSuccess_;
    bool isSuccessIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryUserResp_H_
