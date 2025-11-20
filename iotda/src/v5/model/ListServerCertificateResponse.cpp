

#include "huaweicloud/iotda/v5/model/ListServerCertificateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListServerCertificateResponse::ListServerCertificateResponse()
{
    serverCertificatesIsSet_ = false;
    pageIsSet_ = false;
}

ListServerCertificateResponse::~ListServerCertificateResponse() = default;

void ListServerCertificateResponse::validate()
{
}

web::json::value ListServerCertificateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverCertificatesIsSet_) {
        val[utility::conversions::to_string_t("server_certificates")] = ModelBase::toJson(serverCertificates_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }

    return val;
}
bool ListServerCertificateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_certificates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_certificates"));
        if(!fieldValue.is_null())
        {
            std::vector<ServerCertificateDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerCertificates(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            Page refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    return ok;
}


std::vector<ServerCertificateDTO>& ListServerCertificateResponse::getServerCertificates()
{
    return serverCertificates_;
}

void ListServerCertificateResponse::setServerCertificates(const std::vector<ServerCertificateDTO>& value)
{
    serverCertificates_ = value;
    serverCertificatesIsSet_ = true;
}

bool ListServerCertificateResponse::serverCertificatesIsSet() const
{
    return serverCertificatesIsSet_;
}

void ListServerCertificateResponse::unsetserverCertificates()
{
    serverCertificatesIsSet_ = false;
}

Page ListServerCertificateResponse::getPage() const
{
    return page_;
}

void ListServerCertificateResponse::setPage(const Page& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListServerCertificateResponse::pageIsSet() const
{
    return pageIsSet_;
}

void ListServerCertificateResponse::unsetpage()
{
    pageIsSet_ = false;
}

}
}
}
}
}


