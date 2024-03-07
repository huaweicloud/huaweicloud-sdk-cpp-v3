
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowStorageUsedSpaceResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowStorageUsedSpaceResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowStorageUsedSpaceResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowStorageUsedSpaceResponse();
    virtual ~ShowStorageUsedSpaceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowStorageUsedSpaceResponse members

    /// <summary>
    /// 节点id。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// 磁盘空间使用量。
    /// </summary>

    std::string getUsed() const;
    bool usedIsSet() const;
    void unsetused();
    void setUsed(const std::string& value);


protected:
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string used_;
    bool usedIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowStorageUsedSpaceResponse_H_
