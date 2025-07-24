
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_Asset_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_Asset_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  Asset
    : public ModelBase
{
public:
    Asset();
    virtual ~Asset();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Asset members

    /// <summary>
    /// 
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    utility::datetime getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getCreatorName() const;
    bool creatorNameIsSet() const;
    void unsetcreatorName();
    void setCreatorName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getCreatorNum() const;
    bool creatorNumIsSet() const;
    void unsetcreatorNum();
    void setCreatorNum(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getUpdateName() const;
    bool updateNameIsSet() const;
    void unsetupdateName();
    void setUpdateName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getUpdateNum() const;
    bool updateNumIsSet() const;
    void unsetupdateNum();
    void setUpdateNum(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    utility::datetime getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const utility::datetime& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    utility::datetime createTime_;
    bool createTimeIsSet_;
    std::string creatorName_;
    bool creatorNameIsSet_;
    std::string creatorNum_;
    bool creatorNumIsSet_;
    std::string updateName_;
    bool updateNameIsSet_;
    std::string updateNum_;
    bool updateNumIsSet_;
    utility::datetime updateTime_;
    bool updateTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_Asset_H_
