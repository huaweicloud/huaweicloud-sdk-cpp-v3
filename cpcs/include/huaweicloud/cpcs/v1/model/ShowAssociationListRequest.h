
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowAssociationListRequest_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowAssociationListRequest_H_


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
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowAssociationListRequest
    : public ModelBase
{
public:
    ShowAssociationListRequest();
    virtual ~ShowAssociationListRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAssociationListRequest members

    /// <summary>
    /// 密码集群ID
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 应用ID
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// 指定查询返回记录条数，默认值10
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 索引位置，从page_num指定的下一条数据开始查询默认值为0
    /// </summary>

    int32_t getPageNum() const;
    bool pageNumIsSet() const;
    void unsetpageNum();
    void setPageNum(int32_t value);

    /// <summary>
    /// 排序属性，目前支持以下属性： - **create_time** : 应用的创建时间（默认）
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


protected:
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string appId_;
    bool appIdIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    int32_t pageNum_;
    bool pageNumIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    std::string sortDir_;
    bool sortDirIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowAssociationListRequest& dereference_from_shared_ptr(std::shared_ptr<ShowAssociationListRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowAssociationListRequest_H_
