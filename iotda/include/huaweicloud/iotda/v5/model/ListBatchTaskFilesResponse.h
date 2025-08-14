
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListBatchTaskFilesResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListBatchTaskFilesResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/BatchTaskFile.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ListBatchTaskFilesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListBatchTaskFilesResponse();
    virtual ~ListBatchTaskFilesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListBatchTaskFilesResponse members

    /// <summary>
    /// 批量任务文件列表。
    /// </summary>

    std::vector<BatchTaskFile>& getFiles();
    bool filesIsSet() const;
    void unsetfiles();
    void setFiles(const std::vector<BatchTaskFile>& value);


protected:
    std::vector<BatchTaskFile> files_;
    bool filesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListBatchTaskFilesResponse_H_
