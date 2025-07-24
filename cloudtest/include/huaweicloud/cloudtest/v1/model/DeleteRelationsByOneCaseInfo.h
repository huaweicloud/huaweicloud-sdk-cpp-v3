
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DeleteRelationsByOneCaseInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DeleteRelationsByOneCaseInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  DeleteRelationsByOneCaseInfo
    : public ModelBase
{
public:
    DeleteRelationsByOneCaseInfo();
    virtual ~DeleteRelationsByOneCaseInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteRelationsByOneCaseInfo members

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getWorkItemIds();
    bool workItemIdsIsSet() const;
    void unsetworkItemIds();
    void setWorkItemIds(const std::vector<std::string>& value);

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// 版本uri
    /// </summary>

    std::string getVersionUri() const;
    bool versionUriIsSet() const;
    void unsetversionUri();
    void setVersionUri(const std::string& value);

    /// <summary>
    /// 关联关系类型
    /// </summary>

    std::string getRelateType() const;
    bool relateTypeIsSet() const;
    void unsetrelateType();
    void setRelateType(const std::string& value);


protected:
    std::vector<std::string> workItemIds_;
    bool workItemIdsIsSet_;
    std::string projectUuid_;
    bool projectUuidIsSet_;
    std::string versionUri_;
    bool versionUriIsSet_;
    std::string relateType_;
    bool relateTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DeleteRelationsByOneCaseInfo_H_
