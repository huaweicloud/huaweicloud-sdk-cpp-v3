
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UserStatusStatistic_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UserStatusStatistic_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <map>
#include <vector>
#include <huaweicloud/projectman/v4/model/IssueUser.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  UserStatusStatistic
    : public ModelBase
{
public:
    UserStatusStatistic();
    virtual ~UserStatusStatistic();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UserStatusStatistic members

    /// <summary>
    /// 
    /// </summary>

    IssueUser getUser() const;
    bool userIsSet() const;
    void unsetuser();
    void setUser(const IssueUser& value);

    /// <summary>
    /// 满足条件的工作项总数
    /// </summary>

    int32_t getItemCount() const;
    bool itemCountIsSet() const;
    void unsetitemCount();
    void setItemCount(int32_t value);

    /// <summary>
    /// 工作项对应状态的统计计数
    /// </summary>

    std::map<std::string, int32_t>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(std::map<std::string, int32_t> value);


protected:
    IssueUser user_;
    bool userIsSet_;
    int32_t itemCount_;
    bool itemCountIsSet_;
    std::map<std::string, int32_t> data_;
    bool dataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UserStatusStatistic_H_
