
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_ListTenantVpcIgwsRequest_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_ListTenantVpcIgwsRequest_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  ListTenantVpcIgwsRequest
    : public ModelBase
{
public:
    ListTenantVpcIgwsRequest();
    virtual ~ListTenantVpcIgwsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTenantVpcIgwsRequest members

    /// <summary>
    /// 形式为\\\&quot;fields&#x3D;id&amp;fields&#x3D;project_id&amp;...\\\&quot;，支持字段：id/project_id/vpc_id/created_at/updated_at/name
    /// </summary>

    std::vector<std::string>& getFields();
    bool fieldsIsSet() const;
    void unsetfields();
    void setFields(const std::vector<std::string>& value);

    /// <summary>
    /// 虚拟IGW的uuid
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 虚拟igw所在的vpcid
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 虚拟igw的名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 排序，形式为\&quot;sort_key&#x3D;i2a_id&amp;sort_dir&#x3D;asc\&quot;  支持字段：id/created_at/updated_at
    /// </summary>

    std::string getSortKey() const;
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::string& value);

    /// <summary>
    /// 排序方向  取值范围：asc、desc
    /// </summary>

    std::string getSortDir() const;
    bool sortDirIsSet() const;
    void unsetsortDir();
    void setSortDir(const std::string& value);

    /// <summary>
    /// 每页返回的个数取值范围：0~[2000]，其中2000为局点差异项，具体取值由局点决定
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 分页起始点
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 分页起始点
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);


protected:
    std::vector<std::string> fields_;
    bool fieldsIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    std::string sortDir_;
    bool sortDirIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string marker_;
    bool markerIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListTenantVpcIgwsRequest& dereference_from_shared_ptr(std::shared_ptr<ListTenantVpcIgwsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_ListTenantVpcIgwsRequest_H_
