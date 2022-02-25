
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_CdnLog_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_CdnLog_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  CdnLog
    : public ModelBase
{
public:
    CdnLog();
    virtual ~CdnLog();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CdnLog members

    /// <summary>
    /// 域名名称。
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// 查询起始时间。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 查询结束时间。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 日志名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 日志大小。  单位：byte。
    /// </summary>

    int64_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int64_t value);

    /// <summary>
    /// 日志下载链接。
    /// </summary>

    std::string getLink() const;
    bool linkIsSet() const;
    void unsetlink();
    void setLink(const std::string& value);


protected:
    std::string domainName_;
    bool domainNameIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string name_;
    bool nameIsSet_;
    int64_t size_;
    bool sizeIsSet_;
    std::string link_;
    bool linkIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_CdnLog_H_
