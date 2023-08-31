
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ListHostsRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ListHostsRequest_H_

#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  ListHostsRequest
    : public ModelBase
{
public:
    ListHostsRequest();
    virtual ~ListHostsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListHostsRequest members

    /// <summary>
    /// 主机集群id
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// 是否为代理机
    /// </summary>

    bool isAsProxy() const;
    bool asProxyIsSet() const;
    void unsetasProxy();
    void setAsProxy(bool value);

    /// <summary>
    /// 偏移量，表示从此偏移量开始查询，offset大于等于0
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 每页显示的条目数量，默认为1000
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 主机名，可输入中英文，数字和符号(-_.)
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 排序字段，支持：AS_PROXY|HOST_NAME|OS|OWNER_NAME|as_proxy|host_name|os|owner_name|nickName。不填默认为：as_proxy
    /// </summary>

    std::string getSortKey() const;
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::string& value);

    /// <summary>
    /// 排序方式,默认为：DESC。DESC：降序排序。ASC：升序排序
    /// </summary>

    std::string getSortDir() const;
    bool sortDirIsSet() const;
    void unsetsortDir();
    void setSortDir(const std::string& value);

    /// <summary>
    /// 返回结果是否加密
    /// </summary>

    bool isWithAuth() const;
    bool withAuthIsSet() const;
    void unsetwithAuth();
    void setWithAuth(bool value);


protected:
    std::string groupId_;
    bool groupIdIsSet_;
    bool asProxy_;
    bool asProxyIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    std::string sortDir_;
    bool sortDirIsSet_;
    bool withAuth_;
    bool withAuthIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListHostsRequest& dereference_from_shared_ptr(std::shared_ptr<ListHostsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ListHostsRequest_H_
