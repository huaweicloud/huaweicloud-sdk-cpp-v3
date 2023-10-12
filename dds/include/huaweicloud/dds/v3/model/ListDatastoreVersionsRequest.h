
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ListDatastoreVersionsRequest_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ListDatastoreVersionsRequest_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ListDatastoreVersionsRequest
    : public ModelBase
{
public:
    ListDatastoreVersionsRequest();
    virtual ~ListDatastoreVersionsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDatastoreVersionsRequest members

    /// <summary>
    /// 数据库版本类型。取值为“DDS-Community”。
    /// </summary>

    std::string getDatastoreName() const;
    bool datastoreNameIsSet() const;
    void unsetdatastoreName();
    void setDatastoreName(const std::string& value);


protected:
    std::string datastoreName_;
    bool datastoreNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListDatastoreVersionsRequest& dereference_from_shared_ptr(std::shared_ptr<ListDatastoreVersionsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ListDatastoreVersionsRequest_H_
