
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_ListShareBandwidthTypesRequest_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_ListShareBandwidthTypesRequest_H_


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
class HUAWEICLOUD_EIP_V3_EXPORT  ListShareBandwidthTypesRequest
    : public ModelBase
{
public:
    ListShareBandwidthTypesRequest();
    virtual ~ListShareBandwidthTypesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListShareBandwidthTypesRequest members

    /// <summary>
    /// 形式为\\\&quot;fields&#x3D;id&amp;fields&#x3D;bandwidth_type&amp;...\\\&quot;，支持字段：id/bandwidth_type/name_en/name_zh/created_at/update_at/public_border_group/description
    /// </summary>

    std::vector<std::string>& getFields();
    bool fieldsIsSet() const;
    void unsetfields();
    void setFields(const std::vector<std::string>& value);

    /// <summary>
    /// 支持带宽类型的id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 带宽支持类型
    /// </summary>

    std::string getBandwidthType() const;
    bool bandwidthTypeIsSet() const;
    void unsetbandwidthType();
    void setBandwidthType(const std::string& value);

    /// <summary>
    /// 带宽类型英文表述
    /// </summary>

    std::string getNameEn() const;
    bool nameEnIsSet() const;
    void unsetnameEn();
    void setNameEn(const std::string& value);

    /// <summary>
    /// 带宽类型中文表述
    /// </summary>

    std::string getNameZh() const;
    bool nameZhIsSet() const;
    void unsetnameZh();
    void setNameZh(const std::string& value);

    /// <summary>
    /// 带宽类型所处位置，中心站点or边缘站点
    /// </summary>

    std::string getPublicBorderGroup() const;
    bool publicBorderGroupIsSet() const;
    void unsetpublicBorderGroup();
    void setPublicBorderGroup(const std::string& value);

    /// <summary>
    /// 排序，形式为\&quot;sort_key&#x3D;id&amp;sort_dir&#x3D;asc\&quot;  支持字段：id/bandwidth_type/public_border_group
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
    /// 分页查询起始的资源ID，为空时为查询第一页
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 分页查询起始的资源序号
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);


protected:
    std::vector<std::string> fields_;
    bool fieldsIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string bandwidthType_;
    bool bandwidthTypeIsSet_;
    std::string nameEn_;
    bool nameEnIsSet_;
    std::string nameZh_;
    bool nameZhIsSet_;
    std::string publicBorderGroup_;
    bool publicBorderGroupIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    std::string sortDir_;
    bool sortDirIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;
    int32_t offset_;
    bool offsetIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListShareBandwidthTypesRequest& dereference_from_shared_ptr(std::shared_ptr<ListShareBandwidthTypesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_ListShareBandwidthTypesRequest_H_
