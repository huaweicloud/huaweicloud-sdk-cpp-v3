
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestPlanDetail_creator_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestPlanDetail_creator_H_


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
/// 测试计划创建者信息
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TestPlanDetail_creator
    : public ModelBase
{
public:
    TestPlanDetail_creator();
    virtual ~TestPlanDetail_creator();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TestPlanDetail_creator members

    /// <summary>
    /// 测试计划创建者id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 测试计划创建者的昵称，当用户未设置昵称时不返回该字段
    /// </summary>

    std::string getNickName() const;
    bool nickNameIsSet() const;
    void unsetnickName();
    void setNickName(const std::string& value);

    /// <summary>
    /// 测试计划创建者的用户名称
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string nickName_;
    bool nickNameIsSet_;
    std::string userName_;
    bool userNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestPlanDetail_creator_H_
