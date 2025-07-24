
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AddTestItemInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AddTestItemInfo_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  AddTestItemInfo
    : public ModelBase
{
public:
    AddTestItemInfo();
    virtual ~AddTestItemInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddTestItemInfo members

    /// <summary>
    /// 备注
    /// </summary>

    std::string getComment() const;
    bool commentIsSet() const;
    void unsetcomment();
    void setComment(const std::string& value);

    /// <summary>
    /// 名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 编号
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 责任人
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);

    /// <summary>
    /// 是否为特性,1:特性 2:目录
    /// </summary>

    std::string getIsFeature() const;
    bool isFeatureIsSet() const;
    void unsetisFeature();
    void setIsFeature(const std::string& value);

    /// <summary>
    /// 项目uuid
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// 父节点uri
    /// </summary>

    std::string getParentUri() const;
    bool parentUriIsSet() const;
    void unsetparentUri();
    void setParentUri(const std::string& value);

    /// <summary>
    /// 版本URI
    /// </summary>

    std::string getVersionUri() const;
    bool versionUriIsSet() const;
    void unsetversionUri();
    void setVersionUri(const std::string& value);

    /// <summary>
    /// 是否忽略名称重复
    /// </summary>

    bool isIgnoreDuplicateName() const;
    bool ignoreDuplicateNameIsSet() const;
    void unsetignoreDuplicateName();
    void setIgnoreDuplicateName(bool value);


protected:
    std::string comment_;
    bool commentIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string number_;
    bool numberIsSet_;
    std::string owner_;
    bool ownerIsSet_;
    std::string isFeature_;
    bool isFeatureIsSet_;
    std::string projectUuid_;
    bool projectUuidIsSet_;
    std::string parentUri_;
    bool parentUriIsSet_;
    std::string versionUri_;
    bool versionUriIsSet_;
    bool ignoreDuplicateName_;
    bool ignoreDuplicateNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AddTestItemInfo_H_
