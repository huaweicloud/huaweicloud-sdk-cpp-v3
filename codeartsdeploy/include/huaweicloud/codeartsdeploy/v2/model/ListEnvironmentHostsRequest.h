
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ListEnvironmentHostsRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ListEnvironmentHostsRequest_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  ListEnvironmentHostsRequest
    : public ModelBase
{
public:
    ListEnvironmentHostsRequest();
    virtual ~ListEnvironmentHostsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListEnvironmentHostsRequest members

    /// <summary>
    /// 应用id
    /// </summary>

    std::string getApplicationId() const;
    bool applicationIdIsSet() const;
    void unsetapplicationId();
    void setApplicationId(const std::string& value);

    /// <summary>
    /// 环境id
    /// </summary>

    std::string getEnvironmentId() const;
    bool environmentIdIsSet() const;
    void unsetenvironmentId();
    void setEnvironmentId(const std::string& value);

    /// <summary>
    /// 主机名、ip关键字模糊搜索
    /// </summary>

    std::string getKeyField() const;
    bool keyFieldIsSet() const;
    void unsetkeyField();
    void setKeyField(const std::string& value);

    /// <summary>
    /// 是否为代理机,true为代理机
    /// </summary>

    bool isAsProxy() const;
    bool asProxyIsSet() const;
    void unsetasProxy();
    void setAsProxy(bool value);

    /// <summary>
    /// 分页页码
    /// </summary>

    int32_t getPageIndex() const;
    bool pageIndexIsSet() const;
    void unsetpageIndex();
    void setPageIndex(int32_t value);

    /// <summary>
    /// 分页查询每页条数
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);


protected:
    std::string applicationId_;
    bool applicationIdIsSet_;
    std::string environmentId_;
    bool environmentIdIsSet_;
    std::string keyField_;
    bool keyFieldIsSet_;
    bool asProxy_;
    bool asProxyIsSet_;
    int32_t pageIndex_;
    bool pageIndexIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListEnvironmentHostsRequest& dereference_from_shared_ptr(std::shared_ptr<ListEnvironmentHostsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ListEnvironmentHostsRequest_H_
