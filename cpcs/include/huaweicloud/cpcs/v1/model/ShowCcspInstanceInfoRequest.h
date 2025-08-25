
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowCcspInstanceInfoRequest_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowCcspInstanceInfoRequest_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowCcspInstanceInfoRequest
    : public ModelBase
{
public:
    ShowCcspInstanceInfoRequest();
    virtual ~ShowCcspInstanceInfoRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowCcspInstanceInfoRequest members

    /// <summary>
    /// 指定查询返回记录条数，默认值10
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 实例名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 索引位置，从page_num指定的下一条数据开始查询默认值为0
    /// </summary>

    int32_t getPageNum() const;
    bool pageNumIsSet() const;
    void unsetpageNum();
    void setPageNum(int32_t value);

    /// <summary>
    /// 排序属性，目前支持以下属性： - **create_time** : 实例创建时间（默认）
    /// </summary>

    std::string getSortKey() const;
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::string& value);

    /// <summary>
    /// 排序方向，支持以下值： - **DESC** : 降序（默认） - **ASC** : 升序
    /// </summary>

    std::string getSortDir() const;
    bool sortDirIsSet() const;
    void unsetsortDir();
    void setSortDir(const std::string& value);

    /// <summary>
    /// 密码服务集群ID
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 实例的服务状态: - **enable** : 启用； - **disable** : 停用
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// 实例健康状态： - **true** : 正常； - **false** : 异常
    /// </summary>

    bool isIsNormal() const;
    bool isNormalIsSet() const;
    void unsetisNormal();
    void setIsNormal(bool value);


protected:
    int32_t pageSize_;
    bool pageSizeIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t pageNum_;
    bool pageNumIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    std::string sortDir_;
    bool sortDirIsSet_;
    std::string clusterId_;
    bool clusterIdIsSet_;
    int32_t status_;
    bool statusIsSet_;
    bool isNormal_;
    bool isNormalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowCcspInstanceInfoRequest& dereference_from_shared_ptr(std::shared_ptr<ShowCcspInstanceInfoRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowCcspInstanceInfoRequest_H_
