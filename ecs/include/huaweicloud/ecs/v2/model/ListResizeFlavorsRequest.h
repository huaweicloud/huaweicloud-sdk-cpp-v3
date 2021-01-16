
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ListResizeFlavorsRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ListResizeFlavorsRequest_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
    /// 
    /// </summary>

    std::string getInstanceUuid() const;
    bool instanceUuidIsSet() const;
    void unsetinstanceUuid();
    void setInstanceUuid(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getSortDir() const;
    bool sortDirIsSet() const;
    void unsetsortDir();
    void setSortDir(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getSortKey() const;
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getSourceFlavorId() const;
    bool sourceFlavorIdIsSet() const;
    void unsetsourceFlavorId();
    void setSourceFlavorId(const std::string& value);

    /// <summary>
    /// 
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
