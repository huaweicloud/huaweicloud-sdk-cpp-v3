
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListAccessSitesRequest_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListAccessSitesRequest_H_


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
class HUAWEICLOUD_GEIP_V3_EXPORT  ListAccessSitesRequest
    : public ModelBase
{
public:
    ListAccessSitesRequest();
    virtual ~ListAccessSitesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAccessSitesRequest members

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

    std::vector<std::string>& getCode();
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getProxyRegion();
    bool proxyRegionIsSet() const;
    void unsetproxyRegion();
    void setProxyRegion(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getIecAzCode();
    bool iecAzCodeIsSet() const;
    void unsetiecAzCode();
    void setIecAzCode(const std::vector<std::string>& value);


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
    std::vector<std::string> code_;
    bool codeIsSet_;
    std::vector<std::string> proxyRegion_;
    bool proxyRegionIsSet_;
    std::vector<std::string> iecAzCode_;
    bool iecAzCodeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAccessSitesRequest& dereference_from_shared_ptr(std::shared_ptr<ListAccessSitesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListAccessSitesRequest_H_
