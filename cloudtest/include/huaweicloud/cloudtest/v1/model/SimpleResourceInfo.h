
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SimpleResourceInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SimpleResourceInfo_H_


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
/// 反选的资源列表
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  SimpleResourceInfo
    : public ModelBase
{
public:
    SimpleResourceInfo();
    virtual ~SimpleResourceInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SimpleResourceInfo members

    /// <summary>
    /// 资源类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 资源责任人
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);

    /// <summary>
    /// 资源id
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string owner_;
    bool ownerIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SimpleResourceInfo_H_
