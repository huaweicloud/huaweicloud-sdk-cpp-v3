
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowFilesResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowFilesResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/FileInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ShowFilesResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowFilesResponse();
    virtual ~ShowFilesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowFilesResponse members

    /// <summary>
    /// 下载文件总数
    /// </summary>

    int64_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int64_t value);

    /// <summary>
    /// 下载的文件列表
    /// </summary>

    std::vector<FileInfo>& getFiles();
    bool filesIsSet() const;
    void unsetfiles();
    void setFiles(const std::vector<FileInfo>& value);


protected:
    int64_t totalCount_;
    bool totalCountIsSet_;
    std::vector<FileInfo> files_;
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

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowFilesResponse_H_
