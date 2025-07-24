
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowMindmapBackupByPageResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowMindmapBackupByPageResponse_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/BasePageInfoMindmapBackup.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ShowMindmapBackupByPageResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowMindmapBackupByPageResponse();
    virtual ~ShowMindmapBackupByPageResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowMindmapBackupByPageResponse members

    /// <summary>
    /// 错误码
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BasePageInfoMindmapBackup getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const BasePageInfoMindmapBackup& value);

    /// <summary>
    /// 错误信息
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);


protected:
    std::string code_;
    bool codeIsSet_;
    BasePageInfoMindmapBackup data_;
    bool dataIsSet_;
    std::string message_;
    bool messageIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowMindmapBackupByPageResponse_H_
