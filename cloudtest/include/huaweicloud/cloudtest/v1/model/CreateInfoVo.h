
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CreateInfoVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CreateInfoVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建信息
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  CreateInfoVo
    : public ModelBase
{
public:
    CreateInfoVo();
    virtual ~CreateInfoVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateInfoVo members

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);

    /// <summary>
    /// 创建时间时间戳
    /// </summary>

    int64_t getTimestamp() const;
    bool timestampIsSet() const;
    void unsettimestamp();
    void setTimestamp(int64_t value);

    /// <summary>
    /// 用户ID
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 用户名称
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);


protected:
    std::string time_;
    bool timeIsSet_;
    int64_t timestamp_;
    bool timestampIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::string userName_;
    bool userNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CreateInfoVo_H_
