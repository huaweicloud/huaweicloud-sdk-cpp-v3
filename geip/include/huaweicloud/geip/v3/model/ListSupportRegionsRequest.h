
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListSupportRegionsRequest_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListSupportRegionsRequest_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  ListSupportRegionsRequest
    : public ModelBase
{
public:
    ListSupportRegionsRequest();
    virtual ~ListSupportRegionsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSupportRegionsRequest members

    /// <summary>
    /// 每页条数
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

    /// <summary>
    /// 翻页方向
    /// </summary>

    bool isPageReverse() const;
    bool pageReverseIsSet() const;
    void unsetpageReverse();
    void setPageReverse(bool value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getFields();
    bool fieldsIsSet() const;
    void unsetfields();
    void setFields(const std::vector<std::string>& value);

    /// <summary>
    /// 按照sort_key指定的字段排序
    /// </summary>

    std::vector<std::string>& getSortKey();
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::vector<std::string>& value);

    /// <summary>
    /// 排序的方向，倒序或者正序
    /// </summary>

    std::vector<std::string>& getSortDir();
    bool sortDirIsSet() const;
    void unsetsortDir();
    void setSortDir(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getId();
    bool idIsSet() const;
    void unsetid();
    void setId(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getInstanceType();
    bool instanceTypeIsSet() const;
    void unsetinstanceType();
    void setInstanceType(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getPublicBorderGroup();
    bool publicBorderGroupIsSet() const;
    void unsetpublicBorderGroup();
    void setPublicBorderGroup(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getAccessSite();
    bool accessSiteIsSet() const;
    void unsetaccessSite();
    void setAccessSite(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getRegionId();
    bool regionIdIsSet() const;
    void unsetregionId();
    void setRegionId(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getRemoteEndpoint();
    bool remoteEndpointIsSet() const;
    void unsetremoteEndpoint();
    void setRemoteEndpoint(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getStatus();
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::vector<std::string>& value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string marker_;
    bool markerIsSet_;
    bool pageReverse_;
    bool pageReverseIsSet_;
    std::vector<std::string> fields_;
    bool fieldsIsSet_;
    std::vector<std::string> sortKey_;
    bool sortKeyIsSet_;
    std::vector<std::string> sortDir_;
    bool sortDirIsSet_;
    std::vector<std::string> id_;
    bool idIsSet_;
    std::vector<std::string> instanceType_;
    bool instanceTypeIsSet_;
    std::vector<std::string> publicBorderGroup_;
    bool publicBorderGroupIsSet_;
    std::vector<std::string> accessSite_;
    bool accessSiteIsSet_;
    std::vector<std::string> regionId_;
    bool regionIdIsSet_;
    std::vector<std::string> remoteEndpoint_;
    bool remoteEndpointIsSet_;
    std::vector<std::string> status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListSupportRegionsRequest& dereference_from_shared_ptr(std::shared_ptr<ListSupportRegionsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListSupportRegionsRequest_H_
