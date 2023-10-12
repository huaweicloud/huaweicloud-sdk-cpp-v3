
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ListDatastoreVersionsResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ListDatastoreVersionsResponse_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ListDatastoreVersionsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDatastoreVersionsResponse();
    virtual ~ListDatastoreVersionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDatastoreVersionsResponse members

    /// <summary>
    /// 数据库版本。支持3.4、3.2和4.0版本。
    /// </summary>

    std::vector<std::string>& getVersions();
    bool versionsIsSet() const;
    void unsetversions();
    void setVersions(const std::vector<std::string>& value);


protected:
    std::vector<std::string> versions_;
    bool versionsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ListDatastoreVersionsResponse_H_
