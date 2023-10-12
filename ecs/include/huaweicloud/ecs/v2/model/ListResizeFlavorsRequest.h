
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ListResizeFlavorsRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ListResizeFlavorsRequest_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ListResizeFlavorsRequest
    : public ModelBase
{
public:
    ListResizeFlavorsRequest();
    virtual ~ListResizeFlavorsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListResizeFlavorsRequest members

    /// <summary>
    /// 进行规格切换的云服务器ID，UUID格式。(instance_uuid,source_flavor_id and source_flavor_name 不能都为空)
    /// </summary>

    std::string getInstanceUuid() const;
    bool instanceUuidIsSet() const;
    void unsetinstanceUuid();
    void setInstanceUuid(const std::string& value);

    /// <summary>
    /// 单页面可显示的flavor条数最大值，默认是1000。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 以单页最后一条flavor的ID作为分页标记。
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 升序/降序排序，默认值为：asc。  取值范围：  - asc：表示升序。 - desc：表示降序
    /// </summary>

    std::string getSortDir() const;
    bool sortDirIsSet() const;
    void unsetsortDir();
    void setSortDir(const std::string& value);

    /// <summary>
    /// 排序字段。  key的取值范围：  - flavorid：表示规格ID。 - sort_key的默认值为“flavorid”。 - name：表示规格名称。 - memory_mb：表示内存大小。 - vcpus：表示CPU大小。 - root_gb：表示系统盘大小。
    /// </summary>

    std::string getSortKey() const;
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::string& value);

    /// <summary>
    /// 进行规格切换的云服务器源规格ID。(instance_uuid,source_flavor_id and source_flavor_name 不能都为空)
    /// </summary>

    std::string getSourceFlavorId() const;
    bool sourceFlavorIdIsSet() const;
    void unsetsourceFlavorId();
    void setSourceFlavorId(const std::string& value);

    /// <summary>
    /// 进行规格切换的云服务器源规格名称。(instance_uuid,source_flavor_id and source_flavor_name 不能都为空)
    /// </summary>

    std::string getSourceFlavorName() const;
    bool sourceFlavorNameIsSet() const;
    void unsetsourceFlavorName();
    void setSourceFlavorName(const std::string& value);


protected:
    std::string instanceUuid_;
    bool instanceUuidIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;
    std::string sortDir_;
    bool sortDirIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    std::string sourceFlavorId_;
    bool sourceFlavorIdIsSet_;
    std::string sourceFlavorName_;
    bool sourceFlavorNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListResizeFlavorsRequest& dereference_from_shared_ptr(std::shared_ptr<ListResizeFlavorsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ListResizeFlavorsRequest_H_
