
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_ExportImageRequestBody_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_ExportImageRequestBody_H_


#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 镜像导出请求体
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  ExportImageRequestBody
    : public ModelBase
{
public:
    ExportImageRequestBody();
    virtual ~ExportImageRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExportImageRequestBody members

    /// <summary>
    /// 目的文件的URL，格式：&lt;bucket&gt;:&lt;file&gt;。 说明：此处的OBS桶和镜像文件的存储类别必须是OBS标准存储。
    /// </summary>

    std::string getBucketUrl() const;
    bool bucketUrlIsSet() const;
    void unsetbucketUrl();
    void setBucketUrl(const std::string& value);

    /// <summary>
    /// 文件格式，支持qcow2、vhd、zvhd和vmdk。
    /// </summary>

    std::string getFileFormat() const;
    bool fileFormatIsSet() const;
    void unsetfileFormat();
    void setFileFormat(const std::string& value);

    /// <summary>
    /// 是否使用快速导出，取值为true或者false。 说明：若使用快速导出，则无法指定file_format参数。
    /// </summary>

    bool isIsQuickExport() const;
    bool isQuickExportIsSet() const;
    void unsetisQuickExport();
    void setIsQuickExport(bool value);


protected:
    std::string bucketUrl_;
    bool bucketUrlIsSet_;
    std::string fileFormat_;
    bool fileFormatIsSet_;
    bool isQuickExport_;
    bool isQuickExportIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_ExportImageRequestBody_H_
