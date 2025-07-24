
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SimpleIssueVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SimpleIssueVo_H_


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
/// 需求
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  SimpleIssueVo
    : public ModelBase
{
public:
    SimpleIssueVo();
    virtual ~SimpleIssueVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SimpleIssueVo members

    /// <summary>
    /// ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 层级路径
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// 类型
    /// </summary>

    std::string getTrackerName() const;
    bool trackerNameIsSet() const;
    void unsettrackerName();
    void setTrackerName(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string path_;
    bool pathIsSet_;
    std::string trackerName_;
    bool trackerNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SimpleIssueVo_H_
